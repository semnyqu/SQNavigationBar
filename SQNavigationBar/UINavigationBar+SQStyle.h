//
//  UINavigationBar+SQStyle.h
//  SQNavigationBar
//
//  Created by semny on 17/8/8.
//  Copyright (c) 2017 semny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (SQStyle)
- (void)lt_setBackgroundColor:(UIColor *)backgroundColor;
- (void)lt_setElementsAlpha:(CGFloat)alpha;
- (void)lt_setTranslationY:(CGFloat)translationY;
- (void)lt_reset;
@end
