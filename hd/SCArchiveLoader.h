//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSMutableArray, NSString, SCQueuePerformer;

@interface SCArchiveLoader : NSObject <SCTraceEnabled>
{
    Class _class;
    NSString *_path;
    CDUnknownBlockType _completion;
    NSMutableArray *_loadedFromDiskCallbacks;
    SCQueuePerformer *_queuePerformer;
    unsigned long long _loadState;
}

@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(readonly, nonatomic) SCQueuePerformer *queuePerformer; // @synthesize queuePerformer=_queuePerformer;
- (void).cxx_destruct;
- (_Bool)saveObject:(id)arg1;
- (void)_didFinishLoadingFromDiskWithObject:(id)arg1;
- (void)waitUntilLoadFromDiskCallback:(CDUnknownBlockType)arg1;
- (void)_unarchive;
- (void)markAsLoadedWithoutLoadingFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadFromDiskAsync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithClass:(Class)arg1 fileName:(id)arg2 performerContext:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
