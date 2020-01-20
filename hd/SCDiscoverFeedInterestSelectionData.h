//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSObject<NSCopying>;

@interface SCDiscoverFeedInterestSelectionData : NSObject <NSCopying>
{
    NSObject<NSCopying> *_contentDataModel;
    NSObject<NSCopying> *_loggingDataModel;
}

@property(readonly, copy, nonatomic) NSObject<NSCopying> *loggingDataModel; // @synthesize loggingDataModel=_loggingDataModel;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *contentDataModel; // @synthesize contentDataModel=_contentDataModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentDataModel:(id)arg1 loggingDataModel:(id)arg2;

@end

