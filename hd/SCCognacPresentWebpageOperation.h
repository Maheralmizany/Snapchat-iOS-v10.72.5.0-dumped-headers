//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

@class NSURL, UIViewController;

@interface SCCognacPresentWebpageOperation : SCCognacWVJBRequestOperation
{
    NSURL *_webpageURL;
    UIViewController *_presentingViewController;
}

@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
- (void).cxx_destruct;
- (void)_presentBrowserWithURL:(id)arg1;
- (void)getWebpageURLWithResultBlock:(CDUnknownBlockType)arg1;
- (void)run;

@end

