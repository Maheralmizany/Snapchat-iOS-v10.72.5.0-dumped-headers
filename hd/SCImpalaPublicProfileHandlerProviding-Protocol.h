//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCComposerMarshallable.h"

@class NSString;

@protocol SCImpalaPublicProfileHandlerProviding <NSObject, SCComposerMarshallable>
- (void)getHandlerWithBusinessProfileId:(NSString *)arg1 callback:(void (^)(id <SCImpalaPublicProfileHandling>))arg2;
@end

