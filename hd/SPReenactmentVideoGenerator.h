//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPReenactmentClientsManagerOutput.h"

@class NSString, SPReenactmentRequest;

@interface SPReenactmentVideoGenerator : NSObject <SPReenactmentClientsManagerOutput>
{
    id <SPReenactmentClientsManager> _reenactmentClientsManager;
    unsigned long long _type;
    SPReenactmentRequest *_request;
    CDUnknownBlockType _readyToShowBlock;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType readyToShowBlock; // @synthesize readyToShowBlock=_readyToShowBlock;
@property(retain, nonatomic) SPReenactmentRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <SPReenactmentClientsManager> reenactmentClientsManager; // @synthesize reenactmentClientsManager=_reenactmentClientsManager;
- (void).cxx_destruct;
- (void)didFailFullScreenReenactmentForRequest:(id)arg1 withError:(id)arg2;
- (void)didFinishReenactment:(id)arg1;
- (void)didReadyToShowReenactment:(id)arg1;
- (void)startWithReadyToShowBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithType:(unsigned long long)arg1 request:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
