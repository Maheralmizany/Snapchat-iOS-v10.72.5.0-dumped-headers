//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, SCWebServer, SCWebServerHandler, SCWebServerRequest, SCWebServerResponse;

@interface SCWebServerConnection : NSObject
{
    SCWebServer *_server;
    NSData *_localAddress;
    NSData *_remoteAddress;
    int _socket;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    _Bool _virtualHEAD;
    struct __CFHTTPMessage *_requestMessage;
    SCWebServerRequest *_request;
    SCWebServerHandler *_handler;
    struct __CFHTTPMessage *_responseMessage;
    SCWebServerResponse *_response;
    long long _statusCode;
    _Bool _opened;
}

+ (void)initialize;
@property(readonly, nonatomic) unsigned long long totalBytesWritten; // @synthesize totalBytesWritten=_bytesWritten;
@property(readonly, nonatomic) unsigned long long totalBytesRead; // @synthesize totalBytesRead=_bytesRead;
@property(readonly, nonatomic) NSData *remoteAddressData; // @synthesize remoteAddressData=_remoteAddress;
@property(readonly, nonatomic) NSData *localAddressData; // @synthesize localAddressData=_localAddress;
@property(readonly, nonatomic) SCWebServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)closeSocket;
- (void)dealloc;
@property(readonly, nonatomic) NSString *remoteAddressString;
@property(readonly, nonatomic) NSString *localAddressString;
- (id)initWithServer:(id)arg1 localAddress:(id)arg2 remoteAddress:(id)arg3 socket:(int)arg4;
- (void)_readRequestHeaders;
- (void)_readChunkedBodyWithInitialData:(id)arg1;
- (void)_readBodyWithLength:(unsigned long long)arg1 initialData:(id)arg2;
- (void)_finishProcessingRequest:(id)arg1;
- (void)_startProcessingRequest;
- (void)_initializeResponseHeadersWithStatusCode:(long long)arg1;
@property(readonly, nonatomic, getter=isUsingIPv6) _Bool usingIPv6;
- (int)socket;
- (void)_readNextBodyChunk:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_readBodyWithRemainingLength:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_readHeaders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_readData:(id)arg1 withLength:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_writeBodyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_writeHeadersWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_writeData:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)close;
- (void)abortRequest:(id)arg1 withStatusCode:(long long)arg2;
- (void)processRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preflightRequest:(id)arg1;
- (void)didWriteBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)didReadBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)open;

@end
