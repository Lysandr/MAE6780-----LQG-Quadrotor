function Sdot = rhs(t,S, A,B,R,Q)
	S = reshape(S,[16,16]);
	Sdot = (-S*A)-(A'*S)-Q+(S*B*inv(R)*B'*S);
	Sdot = reshape(Sdot,16^2,1);
end