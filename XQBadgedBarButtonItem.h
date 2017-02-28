//
//  Forked From:
//  FFBadgedBarButtonItem.h
//  FilterFresh
//
//  Created by Mark Granoff on 2/22/14.
//  Copyright (c) 2014 Hawk iMedia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XQBadgedBarButtonItem : UIBarButtonItem

@property (nonatomic, strong) NSString *    badge;
@property (nonatomic, strong) UIColor *     badgeBackgroundColor;
@property (nonatomic, strong) UIFont *      badgeFont;
@property (nonatomic, strong) UIColor *     badgeTextColor;

+(instancetype)barButtonItemWithImageNamed:(NSString *)imageName
                                    target:(id)target
                                    action:(SEL)action;

-(id)initWithImage:(UIImage *)image
            target:(id)target
            action:(SEL)action;

@end
