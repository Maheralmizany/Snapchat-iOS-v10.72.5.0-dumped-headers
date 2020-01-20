//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, SCSnapAdsIdentifier;

@interface SCAdDeepLinkedInteractionUpdate : NSObject <NSCopying>
{
    _Bool _deepLinkFromCard;
    _Bool _deepLinkFallBackToAppStore;
    _Bool _deepLinkFallBackToWebview;
    SCSnapAdsIdentifier *_adIdentifier;
    long long _snapIndex;
    NSNumber *_interactionZoneItemIndex;
}

@property(readonly, copy, nonatomic) NSNumber *interactionZoneItemIndex; // @synthesize interactionZoneItemIndex=_interactionZoneItemIndex;
@property(readonly, nonatomic) _Bool deepLinkFallBackToWebview; // @synthesize deepLinkFallBackToWebview=_deepLinkFallBackToWebview;
@property(readonly, nonatomic) _Bool deepLinkFallBackToAppStore; // @synthesize deepLinkFallBackToAppStore=_deepLinkFallBackToAppStore;
@property(readonly, nonatomic) _Bool deepLinkFromCard; // @synthesize deepLinkFromCard=_deepLinkFromCard;
@property(readonly, nonatomic) long long snapIndex; // @synthesize snapIndex=_snapIndex;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdIdentifier:(id)arg1 snapIndex:(long long)arg2 deepLinkFromCard:(_Bool)arg3 deepLinkFallBackToAppStore:(_Bool)arg4 deepLinkFallBackToWebview:(_Bool)arg5 interactionZoneItemIndex:(id)arg6;

@end

