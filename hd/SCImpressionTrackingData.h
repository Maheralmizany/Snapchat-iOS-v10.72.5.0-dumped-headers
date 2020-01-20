//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate;

@interface SCImpressionTrackingData : NSObject <NSCopying>
{
    id <SCImpressionItem> _impressionItem;
    NSDate *_startDate;
}

@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) id <SCImpressionItem> impressionItem; // @synthesize impressionItem=_impressionItem;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImpressionItem:(id)arg1 startDate:(id)arg2;

@end

