//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface SCTV3TooltipDisplayContext : NSObject
{
    UIView *_containerView;
    UIView *_anchorView;
    NSString *_text;
    long long _arrowPosition;
}

@property(readonly, nonatomic) long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)initWithContainerView:(id)arg1 anchorView:(id)arg2 text:(id)arg3 arrowPosition:(long long)arg4;

@end

