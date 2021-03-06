//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface SCGalleryLoggerGcsInfo : NSObject
{
    NSDate *_beginTime;
    NSString *_snapId;
    NSURL *_gcsURL;
    long long _objectType;
    unsigned long long _dataSizeInBytes;
}

+ (id)host:(id)arg1;
+ (id)gcsPath:(id)arg1;
@property(readonly, nonatomic) unsigned long long dataSizeInBytes; // @synthesize dataSizeInBytes=_dataSizeInBytes;
@property(readonly, nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic) NSURL *gcsURL; // @synthesize gcsURL=_gcsURL;
@property(readonly, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *host;
@property(readonly, nonatomic) NSString *gcsPath;
- (id)initWithBeginTime:(id)arg1 snapId:(id)arg2 gcsURL:(id)arg3 objectType:(long long)arg4 dataSizeInBytes:(unsigned long long)arg5;

@end

