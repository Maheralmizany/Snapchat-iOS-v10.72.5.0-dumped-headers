//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, SOJUAdOpportunityRequestIds;

@protocol SOJUUnlockablesGtqUnlockablesResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *checksumResponseList;
@property(readonly, copy, nonatomic) NSArray *previewCaptionStyles;
@property(readonly, copy, nonatomic) NSArray *assetPrecachedFilters;
@property(readonly, copy, nonatomic) SOJUAdOpportunityRequestIds *opportunityRequestIds;
@property(readonly, copy, nonatomic) NSArray *purposes;
@property(readonly, copy, nonatomic) NSArray *stickers;
@property(readonly, copy, nonatomic) NSArray *prefetchLenses;
@property(readonly, copy, nonatomic) NSArray *lenses;
@property(readonly, copy, nonatomic) NSArray *bitmojiFilters;
@property(readonly, copy, nonatomic) NSArray *invalidFilterIds;
@property(readonly, copy, nonatomic) NSArray *filters;
@end
