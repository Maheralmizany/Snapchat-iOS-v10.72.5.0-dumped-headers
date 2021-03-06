//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPCacheControllerImplementation;

@interface SPConfigCache : NSObject
{
    id <SPFileManager> _fileManager;
    SPCacheControllerImplementation *_fileCache;
}

@property(retain, nonatomic) SPCacheControllerImplementation *fileCache; // @synthesize fileCache=_fileCache;
@property(retain, nonatomic) id <SPFileManager> fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (void)clearConfig;
- (id)getConfigPath;
- (id)initWithSettings:(id)arg1;

@end

