//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "SCImpressionItem.h"

@class NSNumber, NSString;

@interface SCDiscoverFeedOnboardingLoggingData : NSObject <SCImpressionItem, NSCopying, NSCoding>
{
    NSString *_itemId;
    NSNumber *_itemType;
    NSNumber *_itemPos;
    NSString *_tileId;
}

@property(readonly, copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;
@property(readonly, copy, nonatomic) NSNumber *itemPos; // @synthesize itemPos=_itemPos;
@property(readonly, copy, nonatomic) NSNumber *itemType; // @synthesize itemType=_itemType;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemId:(id)arg1 itemType:(id)arg2 itemPos:(id)arg3 tileId:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (_Bool)shouldAlwaysTriggerImpression;
- (id)impressionInfo;
- (id)impressionIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

