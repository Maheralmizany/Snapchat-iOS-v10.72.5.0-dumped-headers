//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCFuture;

@protocol SCOnboardingResourceDownloader <NSObject>
- (SCFuture *)downloadImageFuture:(id <SCOnboardingResource>)arg1;
- (void)downloadImage:(id <SCOnboardingResource>)arg1 comletion:(void (^)(UIImage *))arg2;
- (void)downloadAndUnzipAsImages:(id <SCOnboardingZippedResource>)arg1 completion:(void (^)(NSArray *))arg2;
- (void)downloadAndUnzip:(id <SCOnboardingZippedResource>)arg1 completion:(void (^)(NSArray *))arg2;
- (void)download:(id <SCOnboardingResource>)arg1 completion:(void (^)(NSData *))arg2;
- (void)prefetch:(id <SCOnboardingResource>)arg1;
@end

