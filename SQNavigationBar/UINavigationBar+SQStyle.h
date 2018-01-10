//
//  UINavigationBar+SQStyle.h
//  SQNavigationBar
//
//  Created by semny on 17/8/8.
//  Copyright (c) 2017 semny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (SQStyle)
- (void)sq_setBackgroundColor:(UIColor *)backgroundColor;
- (void)sq_setElementsAlpha:(CGFloat)alpha;
- (void)sq_setTranslationY:(CGFloat)translationY;
- (void)sq_reset;
@end
