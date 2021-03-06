//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSDictionary, NSString, SCOperaAdStoreViewModel, SCOperaPage;

@interface SCOperaStoreV2Layer : NSObject <SCOperaLayer>
{
    _Bool _presentStoreOnVisibleDismissStoreOnCancel;
    _Bool _enableMockPeeking;
    _Bool _enableAnimation;
    SCOperaPage *_page;
    NSDictionary *_storeParams;
    NSString *_appAuthorText;
    SCOperaAdStoreViewModel *_adStoreViewModel;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(readonly, copy, nonatomic) SCOperaAdStoreViewModel *adStoreViewModel; // @synthesize adStoreViewModel=_adStoreViewModel;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(nonatomic) _Bool enableMockPeeking; // @synthesize enableMockPeeking=_enableMockPeeking;
@property(readonly, copy, nonatomic) NSString *appAuthorText; // @synthesize appAuthorText=_appAuthorText;
@property(nonatomic) _Bool presentStoreOnVisibleDismissStoreOnCancel; // @synthesize presentStoreOnVisibleDismissStoreOnCancel=_presentStoreOnVisibleDismissStoreOnCancel;
@property(readonly, copy, nonatomic) NSDictionary *storeParams; // @synthesize storeParams=_storeParams;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)type;
- (id)initWithProperties:(id)arg1 page:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

