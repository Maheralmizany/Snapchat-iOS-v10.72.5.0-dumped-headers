//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SPExportRequest;

@protocol SPExportInteractorInput <NSObject>
- (void)convertVideoToMpeg:(NSURL *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyFileURL:(NSURL *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)processRequest:(SPExportRequest *)arg1 progressBlock:(void (^)(double))arg2 completion:(void (^)(NSURL *, NSURL *, NSError *))arg3;
@end

