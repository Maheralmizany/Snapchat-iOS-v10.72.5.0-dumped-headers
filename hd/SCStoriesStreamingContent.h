//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SCStoriesStreamingContent : NSObject
{
    id <SCNContentManagerContentResult> _contentResult;
    NSData *_overlayData;
}

@property(readonly, copy, nonatomic) NSData *overlayData; // @synthesize overlayData=_overlayData;
@property(readonly, copy, nonatomic) id <SCNContentManagerContentResult> contentResult; // @synthesize contentResult=_contentResult;
- (void).cxx_destruct;
- (id)initWithContentResult:(id)arg1 overlayData:(id)arg2;

@end

