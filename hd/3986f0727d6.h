//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseAPIClient.h"

@class NSDateFormatter, NSURL;

@interface 3986f0727d6 : SCBaseAPIClient
{
    NSURL *_defaultBaseURL;
    double _loggingRate;
    NSDateFormatter *_dateFormatter;
}

+ (void)apiClientDidFinishRequest:(id)arg1 response:(id)arg2 parameters:(id)arg3;
+ (void)removeListener:(id)arg1;
+ (void)addListener:(id)arg1;
+ (id)getConnectionType;
+ (id)getCarrierMNC;
+ (id)getCarrierMCC;
+ (id)getCarrierName;
+ (_Bool)isDevSnapConnect;
+ (_Bool)isDevAuthService;
+ (_Bool)isDevSnapchat;
+ (id)defaultSnapConnectUrl;
+ (id)defaultSnaptokenUrl;
+ (id)defaultAuthServiceUrl;
+ (id)defaultUrl;
+ (id)updateSharedSnapConnectClientWithUrl:(id)arg1;
+ (id)updateSharedAuthServiceClientWithUrl:(id)arg1;
+ (id)updateSharedClientWithUrl:(id)arg1;
+ (id)sharedSnapConnectClient;
+ (id)sharedAuthServiceClient;
+ (id)sharedClient;
+ (void)initialize;
+ (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
+ (void)showAlertAndWaitForDismissalWithUrl:(id)arg1;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(readonly, nonatomic) double loggingRate; // @synthesize loggingRate=_loggingRate;
@property(retain, nonatomic) NSURL *defaultBaseURL; // @synthesize defaultBaseURL=_defaultBaseURL;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enqueueHTTPRequestOperation:(id)arg1;
- (id)96416ca4c5d70588f:(id)arg1 fbb9:(id)arg2 2d0c383034:(id)arg3;
- (id)6174a080b06088716e73727de9b12d:(id)arg1 5388:(id)arg2 6c86b34a9e:(id)arg3 aacf1e457746c00191c198b7f:(CDUnknownBlockType)arg4;
- (_Bool)isCustomEndpoint;
- (_Bool)_shouldLogPayloadGeneration;
- (void)ae8a7aa9e46461cf6e9:(id)arg1 a026:(id)arg2 e24d509ec3:(id)arg3;
- (id)ea454cd35af559583:(id)arg1 98a:(id)arg2 f1646913be:(id)arg3 572e96cba402a:(_Bool)arg4;
- (id)initWithBaseURL:(id)arg1;

@end

