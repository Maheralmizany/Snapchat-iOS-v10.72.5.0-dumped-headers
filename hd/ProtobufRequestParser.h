//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRequestParser.h"

@class NSString;

@interface ProtobufRequestParser : NSObject <SCRequestParser>
{
    Class _protobufClazz;
}

- (id)parseData:(id)arg1 MIMEType:(id)arg2 error:(id *)arg3;
- (id)acceptHeader;
- (id)initWithProtobufClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

