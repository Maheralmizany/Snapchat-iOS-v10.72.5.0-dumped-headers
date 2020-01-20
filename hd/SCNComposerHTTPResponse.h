//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNComposerHTTPResponse : NSObject
{
    int _statusCode;
    NSObject *_headers;
    id <SCNShimsDataProvider> _body;
}

+ (id)HTTPResponseWithStatusCode:(int)arg1 headers:(id)arg2 body:(id)arg3;
@property(readonly, nonatomic) id <SCNShimsDataProvider> body; // @synthesize body=_body;
@property(readonly, nonatomic) NSObject *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStatusCode:(int)arg1 headers:(id)arg2 body:(id)arg3;

@end

