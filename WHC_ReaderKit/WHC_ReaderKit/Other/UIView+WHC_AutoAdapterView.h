//
//  UIView+WHC_AutoAdapterView.h
//  UIView+WHC_AutoAdapterView
//
//  Created by 吴海超 on 15/6/16.
//  Copyright (c) 2015年 吴海超. All rights reserved.
//

/*************************************************************
 *                                                           *
 *  qq:712641411                                             *
 *  开发作者: 吴海超(WHC)                                      *
 *  iOS技术交流群:302157745                                    *
 *  gitHub:https://github.com/netyouli/WHC_ReaderKit    *
 *                                                           *
 *************************************************************/

#import <UIKit/UIKit.h>

typedef enum _WHCAutoAdpterLabelType:NSInteger{
    
    LabelNoneScale = 1,       //不缩放
    
    LabelRatioSacle,          //以相对4s方式缩放
    
    LabelStretchSacle,        //拉伸缩放
    
}WHCAutoAdpterLabelType;

@interface UIView (WHC_AutoAdapterView)

//! 获取当前屏幕宽度
- (CGFloat)screenWidth;

//! 获取当前屏幕高度
- (CGFloat)screenHeight;

//! 获取当前屏幕宽度与4s比例
- (CGFloat)screenWidthRatio;

//! 获取当前屏幕高度与4s比例
- (CGFloat)screenHeightRatio;

//! 自动横向适配当前view
- (void)autoHoriAdapter;

- (void)autoHoriAdapterWithLabelSacleType:(WHCAutoAdpterLabelType)scaleType;

//! 自动竖向适配当前view,但不拉伸高度
- (void)autoVerAdapter;

//! 自动竖向适配当前view,同时拉伸高度
- (void)autoVerAdapterWithStretch;

//! 自动横竖向适配当前view,但不拉伸高度
- (void)autoAdapter;

//! 自动横竖向适配当前view,同时拉伸高度
- (void)autoAdapterWithStretch;

@end
