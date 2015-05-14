//
//  UIView+DOPExtension.h
//  DOPExtensionNavbarMenuDemo
//
//  Created by weizhou on 5/14/15.
//  Copyright (c) 2015 weizhou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (DOPExtension)

@property (assign, nonatomic) CGFloat dop_x;
@property (assign, nonatomic) CGFloat dop_y;
@property (assign, nonatomic) CGFloat dop_width;
@property (assign, nonatomic) CGFloat dop_height;
@property (assign, nonatomic) CGSize dop_size;
@property (assign, nonatomic) CGPoint dop_origin;

@end
