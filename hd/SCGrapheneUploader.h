//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCQueuePerformer, SCRequestManager;

@interface SCGrapheneUploader : NSObject
{
    SCRequestManager *_requestManager;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)upload:(id)arg1;
- (id)init;

@end

