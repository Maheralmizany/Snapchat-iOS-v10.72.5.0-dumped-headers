//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCAdPendingUnarchiveRecord : NSObject
{
    CDUnknownBlockType _completion;
    NSString *_mediaId;
}

@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (id)initWithMediaId:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

