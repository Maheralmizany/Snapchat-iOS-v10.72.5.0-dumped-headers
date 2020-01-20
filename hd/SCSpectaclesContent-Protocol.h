//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSObject.h"

@class CLLocation, NSData, NSDate, NSNumber, NSString, NSUUID, SCSpectaclesDevice;

@protocol SCSpectaclesContent <NSObject, NSCoding>
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, copy, nonatomic) NSString *UUID;
@property(readonly, nonatomic) NSData *IV;
@property(readonly, nonatomic) NSData *key;
@property(readonly, nonatomic) unsigned long long buttonSide;
@property(readonly, nonatomic) NSUUID *batchID;
@property(readonly, nonatomic) NSString *multisnapGroupID;
@property(readonly, nonatomic) NSNumber *videoDuration;
@property(readonly, nonatomic) NSDate *timeOfCapture;
@property(readonly, nonatomic) int mediaType;
@property(readonly, nonatomic) int mediaFormat;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) __weak SCSpectaclesDevice *device;
- (float)downloadProgressForComponent:(unsigned long long)arg1;
- (long long)remoteSizeForComponent:(unsigned long long)arg1;
- (long long)localSizeForComponent:(unsigned long long)arg1;
- (NSData *)dataForComponent:(unsigned long long)arg1 range:(struct _NSRange)arg2;
- (NSData *)dataForComponent:(unsigned long long)arg1;
- (NSData *)rawMetadata;
- (_Bool)isComponentApplicable:(unsigned long long)arg1;
- (_Bool)isSyncedForComponent:(unsigned long long)arg1;
- (_Bool)isDownloadCompleteForComponent:(unsigned long long)arg1;
- (_Bool)isPausedForComponent:(unsigned long long)arg1;
@end

