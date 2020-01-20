//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface SCExtensionSharedDirectory : NSObject
{
    NSURL *_url;
}

+ (id)applicationGroupContainerURL;
+ (void)removeDirectoryForUserId:(id)arg1;
+ (id)directoryForUserId:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)remove;
- (id)subDirectoryWithName:(id)arg1;
- (id)sharedFileWithName:(id)arg1 delegate:(id)arg2;
- (id)filesWithError:(id *)arg1;
- (id)initWithRawFolderPath:(id)arg1;
- (id)initWithParentDirectory:(id)arg1 name:(id)arg2;
- (id)initUserScopedDirectoryWithUserId:(id)arg1;

@end

