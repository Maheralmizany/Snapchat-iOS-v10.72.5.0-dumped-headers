//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface SIGActionBarItem : NSObject
{
    UIImage *_image;
    NSString *_title;
    id _target;
    SEL _selector;
}

+ (id)actionBarItemWithImage:(id)arg1 title:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 title:(id)arg2 target:(id)arg3 selector:(SEL)arg4;

@end

