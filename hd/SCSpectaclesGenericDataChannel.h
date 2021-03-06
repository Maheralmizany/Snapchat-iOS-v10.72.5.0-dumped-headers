//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSInputStream, NSMutableData, NSOutputStream, NSString, NSThread;

@interface SCSpectaclesGenericDataChannel : NSObject <NSStreamDelegate>
{
    NSMutableData *_writeBuffer;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    id <SCPerforming> _performer;
    NSThread *_streamThread;
    _Bool _isOpen;
    _Bool _logPackets;
    id <SCSpectaclesGenericDataChannelDelegate> _delegate;
}

@property(nonatomic) _Bool logPackets; // @synthesize logPackets=_logPackets;
@property(readonly, nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) __weak id <SCSpectaclesGenericDataChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)_areBothStreamsOpen;
- (void)_sendErrorForStream:(id)arg1;
- (void)_writeDataInternal;
- (void)_readDataInternal;
- (void)_threadMain;
- (void)_writeData:(id)arg1;
- (void)close;
- (void)writeData:(id)arg1;
- (void)open;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

