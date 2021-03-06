//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSFileHandle, NSString, SCSpectaclesCache;

@interface SCSpectaclesFile : NSObject <NSCoding>
{
    NSString *_localFilename;
    NSString *_remoteFileName;
    long long _remoteFileSize;
    SCSpectaclesCache *_cache;
    long long _lastKnownFileSize;
    NSFileHandle *_fileHandle;
}

+ (id)_performer;
+ (void)removeFilesFromDisk:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (unsigned long long)fileTypeFromRemoteFilename:(id)arg1;
+ (id)contentNameFromRemoteFilename:(id)arg1;
+ (id)_extensionForType:(unsigned long long)arg1;
+ (id)_suffixForType:(unsigned long long)arg1;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property long long lastKnownFileSize; // @synthesize lastKnownFileSize=_lastKnownFileSize;
@property(retain, nonatomic) SCSpectaclesCache *cache; // @synthesize cache=_cache;
@property(nonatomic) long long remoteFileSize; // @synthesize remoteFileSize=_remoteFileSize;
@property(copy, nonatomic) NSString *remoteFileName; // @synthesize remoteFileName=_remoteFileName;
@property(copy, nonatomic) NSString *localFilename; // @synthesize localFilename=_localFilename;
- (void).cxx_destruct;
- (void)_closeFile;
- (_Bool)_openFile;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isConfigured;
- (void)_removeFromDisk;
- (id)localFilePath;
- (long long)localFileSize;
- (_Bool)appendData:(id)arg1 range:(struct _NSRange)arg2;
- (id)dataFromLocalFileWithRange:(struct _NSRange)arg1;
- (void)dealloc;
- (id)initWithCache:(id)arg1 localFilename:(id)arg2 remoteFilename:(id)arg3 remoteFileSize:(long long)arg4;

@end

