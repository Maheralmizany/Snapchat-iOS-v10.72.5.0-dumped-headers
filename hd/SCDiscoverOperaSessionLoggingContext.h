//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCDiscoverOperaSessionLoggingContext : NSObject
{
    NSString *_trackingId;
    long long _viewLocation;
    NSString *_collectionId;
    long long _collectionType;
    long long _collectionPosition;
}

@property(readonly, nonatomic) long long collectionPosition; // @synthesize collectionPosition=_collectionPosition;
@property(readonly, nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
@property(readonly, copy, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
@property(readonly, nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
- (void).cxx_destruct;
- (id)initWithTrackingId:(id)arg1 viewLocation:(long long)arg2 collectionId:(id)arg3 collectionType:(long long)arg4 collectionPosition:(long long)arg5;

@end

