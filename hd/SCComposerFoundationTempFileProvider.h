//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCComposerFoundationTempFileProviding.h"

@class NSString, NSURL, SCQueuePerformer;

@interface SCComposerFoundationTempFileProvider : NSObject <SCComposerFoundationTempFileProviding>
{
    NSURL *_tempDirectory;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)getTempFileForDataWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
