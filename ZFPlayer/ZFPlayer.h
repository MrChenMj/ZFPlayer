//
//  ZFPlayer.h
//
// Copyright (c) 2016年 任子丰 ( http://github.com/renzifeng )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#define iPhone4s ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
// 监听TableView的contentOffset
#define kZFPlayerViewContentOffset          @"contentOffset"
// player的单例
#define ZFPlayerShared                      [ZFBrightnessView sharedBrightnessView]
// 屏幕的宽
#define ScreenWidth                         [[UIScreen mainScreen] bounds].size.width
// 屏幕的高
#define ScreenHeight                        [[UIScreen mainScreen] bounds].size.height
// 颜色值RGB
#define RGBA(r,g,b,a)                       [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
// 图片路径
#define ZFPlayerSrcName(file)               [@"ZFPlayer.bundle" stringByAppendingPathComponent:file]

#define ZFPlayerFrameworkSrcName(file)      [@"Frameworks/ZFPlayer.framework/ZFPlayer.bundle" stringByAppendingPathComponent:file]

#define ZFPlayerImage(file)                 [UIImage imageNamed:ZFPlayerSrcName(file)] ? :[UIImage imageNamed:ZFPlayerFrameworkSrcName(file)]

#define ZFPlayerOrientationIsLandscape      UIDeviceOrientationIsLandscape([UIDevice currentDevice].orientation)

#define ZFPlayerOrientationIsPortrait       UIDeviceOrientationIsPortrait([UIDevice currentDevice].orientation)


//为了兼容模拟器,使用屏幕大小判断是否iPhoneX等全面屏
#define IS_iPhoneX (CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(375, 812)))
//#define IS_iPhoneXS (CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(375, 812)))
#define IS_iPhoneXS_Max (CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(414, 896)))
//#define IS_iPhoneXR (CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(414, 896)))

//是否是全面屏手机型号,且是横屏状态(landScape)
#define IS_iPhoneX_L (CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(812, 375)))
#define IS_iPhoneXS_Max_L (CGSizeEqualToSize([[UIScreen mainScreen] bounds].size, CGSizeMake(896, 414)))

//是否是全面屏机型:iPhone X, iPhone XS, iPhone XS Max, iPhone XR
#define IS_FullScreen (IS_iPhoneX || IS_iPhoneXS_Max)
//是否是全名屏手机,且是横屏状态
#define IS_FullScreen_L (IS_iPhoneX_L || IS_iPhoneXS_Max_L)

#define StatusBarHeights (CGRectGetHeight([[UIApplication sharedApplication] statusBarFrame]))

#import "ZFPlayerView.h"
#import "ZFPlayerModel.h"
#import "ZFPlayerControlView.h"
#import "ZFBrightnessView.h"
#import "UITabBarController+ZFPlayerRotation.h"
#import "UIViewController+ZFPlayerRotation.h"
#import "UINavigationController+ZFPlayerRotation.h"
#import "UIImageView+ZFCache.h"
#import "UIWindow+CurrentViewController.h"
#import "ZFPlayerControlViewDelegate.h"
#import <Masonry/Masonry.h>
