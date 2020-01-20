//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCSnapAdsIdentifier;

@interface SCAdWindowFocusChangedInteractionUpdate : NSObject <NSCopying>
{
    _Bool _hasFocus;
    SCSnapAdsIdentifier *_adIdentifier;
    long long _snapIndex;
    long long _fromPanel;
}

@property(readonly, nonatomic) _Bool hasFocus; // @synthesize hasFocus=_hasFocus;
@property(readonly, nonatomic) long long fromPanel; // @synthesize fromPanel=_fromPanel;
@property(readonly, nonatomic) long long snapIndex; // @synthesize snapIndex=_snapIndex;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdIdentifier:(id)arg1 snapIndex:(long long)arg2 fromPanel:(long long)arg3 hasFocus:(_Bool)arg4;

@end

