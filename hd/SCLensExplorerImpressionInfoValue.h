//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate;

@interface SCLensExplorerImpressionInfoValue : NSObject <NSCopying, NSCoding>
{
    unsigned int _numberOfTaps;
    unsigned int _totalImpressionTime;
    unsigned int _lastImpressionTime;
    unsigned int _itemPosition;
    unsigned long long _storyKey;
    NSDate *_lastUpdateDate;
    NSDate *_lastWatchDate;
}

@property(readonly, copy, nonatomic) NSDate *lastWatchDate; // @synthesize lastWatchDate=_lastWatchDate;
@property(readonly, copy, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(readonly, nonatomic) unsigned int itemPosition; // @synthesize itemPosition=_itemPosition;
@property(readonly, nonatomic) unsigned int lastImpressionTime; // @synthesize lastImpressionTime=_lastImpressionTime;
@property(readonly, nonatomic) unsigned int totalImpressionTime; // @synthesize totalImpressionTime=_totalImpressionTime;
@property(readonly, nonatomic) unsigned long long storyKey; // @synthesize storyKey=_storyKey;
@property(readonly, nonatomic) unsigned int numberOfTaps; // @synthesize numberOfTaps=_numberOfTaps;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNumberOfTaps:(unsigned int)arg1 storyKey:(unsigned long long)arg2 totalImpressionTime:(unsigned int)arg3 lastImpressionTime:(unsigned int)arg4 itemPosition:(unsigned int)arg5 lastUpdateDate:(id)arg6 lastWatchDate:(id)arg7;
- (id)initWithCoder:(id)arg1;

@end

