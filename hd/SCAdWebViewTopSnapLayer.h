//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaLayer.h"

@class NSArray, NSDictionary, NSString, NSURL, SCOperaPage;

@interface SCAdWebViewTopSnapLayer : NSObject <SCOperaLayer>
{
    NSURL *_url;
    NSArray *_cookies;
    long long _interactionZoneType;
    NSDictionary *_storeParams;
    long long _deepLinkFallbackType;
    NSURL *_deeplinkURL;
    NSString *_deeplinkCustomUserAgent;
    SCOperaPage *_page;
}

+ (id)layerWithProperties:(id)arg1 page:(id)arg2;
@property(nonatomic) __weak SCOperaPage *page; // @synthesize page=_page;
@property(readonly, copy, nonatomic) NSString *deeplinkCustomUserAgent; // @synthesize deeplinkCustomUserAgent=_deeplinkCustomUserAgent;
@property(readonly, copy, nonatomic) NSURL *deeplinkURL; // @synthesize deeplinkURL=_deeplinkURL;
@property(readonly, nonatomic) long long deepLinkFallbackType; // @synthesize deepLinkFallbackType=_deepLinkFallbackType;
@property(readonly, copy, nonatomic) NSDictionary *storeParams; // @synthesize storeParams=_storeParams;
@property(nonatomic) long long interactionZoneType; // @synthesize interactionZoneType=_interactionZoneType;
@property(readonly, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
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

