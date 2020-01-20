//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, NSURL, SCWebBrowserConfig;

@protocol SCWebBrowser <NSObject>
+ (NSString *)browserName;
+ (_Bool)isPrefetchingSupported;
+ (_Bool)isPreloadingSupported;
@property(readonly, nonatomic) NSNumber *visibleContentYOffset;
@property(readonly, nonatomic) NSDictionary *javaScriptMetrics;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly, nonatomic) NSNumber *initialLoadStatusCode;
@property(readonly, nonatomic) NSURL *desiredURL;
- (void)prefetchRootDocumentAtURL:(NSURL *)arg1;
- (void)setIsOffScreen:(_Bool)arg1;
- (void)reset;
- (void)loadURL:(NSURL *)arg1;
- (id)initWithConfig:(SCWebBrowserConfig *)arg1 delegate:(id <SCWebBrowserDelegate>)arg2 safeBrowsingChecker:(id <SCWebBrowsingURLChecker>)arg3 urlInterceptor:(id <SCWebBrowsingURLInterceptor>)arg4 contentDelivery:(id <SCWebBrowsingContentFetcherProtocol>)arg5;
@end

