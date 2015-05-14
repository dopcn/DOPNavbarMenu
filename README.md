# DOPNavbarMenu
expand navigationbar with more items

gif better than any words.

![image](https://github.com/dopcn/DOPNavbarMenu/blob/master/images/sample.gif)

### `@interface`
```objc

//iOS7+
@interface DOPNavbarMenu : UIView

@property (copy, nonatomic, readonly) NSArray *items;
@property (assign, nonatomic, readonly) NSInteger maximumNumberInRow;
@property (assign, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id <DOPNavbarMenuDelegate> delegate;

@property (strong, nonatomic) UIColor *textColor;
@property (strong, nonatomic) UIColor *separatarColor;

- (instancetype)initWithItems:(NSArray *)items
                        width:(CGFloat)width
           maximumNumberInRow:(NSInteger)max;

- (void)showInNavigationController:(UINavigationController *)nvc;
- (void)dismissWithAnimation:(BOOL)animation;

@end
```

### `@protocol`

```objc
@protocol DOPNavbarMenuDelegate <NSObject>

- (void)didShowMenu:(DOPNavbarMenu *)menu;
- (void)didDismissMenu:(DOPNavbarMenu *)menu;
- (void)didSelectedMenu:(DOPNavbarMenu *)menu atIndex:(NSInteger)index;

@end
```