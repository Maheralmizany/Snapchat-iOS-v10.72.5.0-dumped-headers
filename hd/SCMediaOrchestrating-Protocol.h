//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCMediaOrchestrating <NSObject>
- (void)resumeWithId:(NSString *)arg1 callbackPerformer:(id <SCPerforming>)arg2 completion:(void (^)(SCMediaOrchestrationResult *))arg3;
@end
