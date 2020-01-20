//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCComposerFoundationCancelable.h"

@class NSString, SCSessionRequestManager;

@interface SCComposerNetworkingRequestCanceler : NSObject <SCComposerFoundationCancelable>
{
    SCSessionRequestManager *_sessionRequestManager;
    _Bool _canceled;
    NSString *_requestKey;
}

@property(copy) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property _Bool canceled; // @synthesize canceled=_canceled;
- (void).cxx_destruct;
- (void)cancel;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithSessionRequestManager:(id)arg1 requestKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

