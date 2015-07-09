# UberKitRequest
APIs for ordering Uber cars

-(void)getResponseFromRequestWithCompletionHandler:(RequestHandler)handler;

@property (strong, nonatomic) NSString *accessToken;
@property (strong, nonatomic) NSDictionary *parameters;

1. Make sure you registered Uber developer;

2. Call the API only after passing in your valid access token and parameters according to Uber developer API site:
https://developer.uber.com/v1/endpoints/

