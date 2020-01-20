//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCognacOperaSession.h"

@class NSString, SCCognacOperaDataSource;

@interface SCCognacOperaLocalStorageSession : NSObject <SCCognacOperaSession>
{
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (CDUnknownBlockType)_deleteDataHandler;
- (CDUnknownBlockType)_getDataHandler;
- (CDUnknownBlockType)_setDataHandler;
- (id)registeredWVJBHandlerNameToHandler;
- (void)pauseSession;
- (void)endSession;
- (void)startSession;
- (void)resumeSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

