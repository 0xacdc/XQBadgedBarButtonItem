//
//  FFBadgedBarButtonItem.h
//  FilterFresh
//
//  Created by Mark Granoff on 2/22/14.
//  Copyright (c) 2014 Hawk iMedia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FFBadgedBarButtonItem : UIBarButtonItem

@property (nonatomic, strong) NSString *badge;

-(id)initWithImage:(UIImage *)image 
            target:(id)target 
            action:(SEL)action;

-(void)setBadgeFont:(UIFont *)font;

-(void)setBadgeTextColor:(UIColor *)colour;

-(void)setBadgeBackgroundColor:(UIColor *)colour;

@end
