//
//  UIButton+UIButtonImageWithLabel.h
//  AntenatalTraining
//
//  Created by mo jun on 4/28/16.
//  Copyright © 2016 kimoworks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (UIButtonImageWithLabel)

- (void)setImage:(UIImage *)image
       withTitle:(NSString *)title
      titleColor:(UIColor *)titleColor
        forState:(UIControlState)stateType;

@end
