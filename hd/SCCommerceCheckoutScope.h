//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCommerceStoreDataModel;

@interface SCCommerceCheckoutScope : NSObject
{
    SCCommerceStoreDataModel *_store;
    id <SCUIContainer> _uiContainer;
    id <SCCommerceCheckoutDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCCommerceCheckoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
@property(readonly, copy, nonatomic) SCCommerceStoreDataModel *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)initWithStore:(id)arg1 uiContainer:(id)arg2 delegate:(id)arg3;

@end
