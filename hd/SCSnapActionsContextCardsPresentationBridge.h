//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSnapActionsCardsModalViewInsets;

@interface SCSnapActionsContextCardsPresentationBridge : NSObject
{
    CDUnknownBlockType _prepareForPresentation;
    CDUnknownBlockType _present;
    CDUnknownBlockType _hide;
    CDUnknownBlockType _insetsDidChange;
    SCSnapActionsCardsModalViewInsets *_insets;
}

@property(retain, nonatomic) SCSnapActionsCardsModalViewInsets *insets; // @synthesize insets=_insets;
- (void).cxx_destruct;
- (void)notifyInsetsDidChange;
- (void)hide:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)present:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForPresentation:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CDUnknownBlockType registerInsetsDidChange;
@property(readonly, nonatomic) CDUnknownBlockType registerHide;
@property(readonly, nonatomic) CDUnknownBlockType registerPresent;
@property(readonly, nonatomic) CDUnknownBlockType registerPrepareForPresentation;
- (id)init;

@end
