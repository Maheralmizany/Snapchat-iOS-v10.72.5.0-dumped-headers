//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol SCDataUploading <NSObject>
- (void)uploadData:(NSData *)arg1 uniqueMediaId:(NSString *)arg2 callbackPerformer:(id <SCPerforming>)arg3 successBlock:(void (^)(SCBoltContentObject *, NSURL *))arg4 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg5;
@end
