//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface SCCachingMediaCacheItemInfo : NSObject
{
    _Bool _isSource;
    NSString *_entityUUID;
    long long _fileSizeInBytes;
    NSDate *_lastAccessTime;
    NSURL *_fileURL;
    long long _sourceLevel;
}

@property(readonly, nonatomic) _Bool isSource; // @synthesize isSource=_isSource;
@property(readonly, nonatomic) long long sourceLevel; // @synthesize sourceLevel=_sourceLevel;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSDate *lastAccessTime; // @synthesize lastAccessTime=_lastAccessTime;
@property(readonly, nonatomic) long long fileSizeInBytes; // @synthesize fileSizeInBytes=_fileSizeInBytes;
@property(readonly, copy, nonatomic) NSString *entityUUID; // @synthesize entityUUID=_entityUUID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntityUUID:(id)arg1 fileSize:(long long)arg2 lastAccessTime:(id)arg3 fileURL:(id)arg4 sourceLevel:(long long)arg5 isSource:(_Bool)arg6;

@end

