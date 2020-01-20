//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCTwoFAContext;

@interface SCTwoFAScope : NSObject
{
    id <SCTwoFADelegate> _delegate;
    id <SCUIContainer> _uiContainer;
    SCTwoFAContext *_context;
}

@property(readonly, nonatomic) SCTwoFAContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
@property(readonly, nonatomic) __weak id <SCTwoFADelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 uiContainer:(id)arg2 context:(id)arg3;

@end

