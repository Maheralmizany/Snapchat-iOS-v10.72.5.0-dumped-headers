//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SCApplicationLoginLoggerDeepLinkHelper : NSObject
{
    NSNumber *_deepLinkSource;
    NSString *_deepLinkId;
    NSString *_deepLinkReferrer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *deepLinkReferrer; // @synthesize deepLinkReferrer=_deepLinkReferrer;
@property(retain, nonatomic) NSString *deepLinkId; // @synthesize deepLinkId=_deepLinkId;
@property(retain, nonatomic) NSNumber *deepLinkSource; // @synthesize deepLinkSource=_deepLinkSource;
- (void).cxx_destruct;

@end

