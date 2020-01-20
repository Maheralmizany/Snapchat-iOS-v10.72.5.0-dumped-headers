//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStreamingResourceURLProvider.h"

@class NSString, NSURL;

@interface SCStreamingResourceContentInfo : NSObject <SCStreamingResourceURLProvider>
{
    NSURL *_url;
    NSString *_resourceId;
    id <SCNContentManagerContentResult> _contentResult;
}

@property(readonly, nonatomic) id <SCNContentManagerContentResult> contentResult; // @synthesize contentResult=_contentResult;
@property(readonly, copy, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithUrl:(id)arg1 resourceId:(id)arg2 contentResult:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
