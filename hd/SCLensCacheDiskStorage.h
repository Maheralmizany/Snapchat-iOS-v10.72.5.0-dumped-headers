//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensCacheURL.h"

@class NSFileManager, NSString;

@interface SCLensCacheDiskStorage : NSObject <SCLensCacheURL>
{
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
- (unsigned long long)fileSizeForManagedURL:(id)arg1;
- (id)modificationDateForManagedURL:(id)arg1;
- (id)managedURLs;
- (void)clearAllContentWithCompletion:(CDUnknownBlockType)arg1;
- (id)clearManagedLocalURL:(id)arg1;
- (id)clearManagedLocalURLForMetadata:(id)arg1;
- (void)_logUsageOfManagedURLForMetadata:(id)arg1 error:(id *)arg2;
- (void)logUsageOfManagedURLForMetadata:(id)arg1;
- (id)managedLocalURLForMetadata:(id)arg1;
- (void)completeRegistrationForManagedLocalURLForMetadata:(id)arg1;
- (id)registerManagedLocalURLForMetadata:(id)arg1;
- (id)initWithFileManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

